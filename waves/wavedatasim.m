clc; clear all ;
x_l = -20;
x_r = 20;
y_l = -20;
y_r = 20;
ds = 0.5;
A = 1;
k = 1;
dt = 0.05;
w = 1;
x = [x_l:ds:x_r];
y = [y_l:ds:y_r];
[X,Y] = meshgrid(x,y);
for i = 1:100
    Z = A*sin(k*Y+(w*i/2));
    CO(:,:,1) = 0.3*ones((y_r-y_l)/ds + 1) + 0.3*cos(k*Y+(w*i/2));
    CO(:,:,2) = 0.3*ones((y_r-y_l)/ds + 1) + 0.3*cos(k*Y+(w*i/2));
    CO(:,:,3) = 0.7*ones((y_r-y_l)/ds + 1) + 0.3*cos(k*Y+(w*i/2));
    surf(X,Y,Z,CO);
    hold on;
    shading interp;
    xlim([x_l x_r]);
    ylim([y_l y_r]);
    zlim([y_l y_r]);
    Zc = sqrt(X.^2+Y.^2);
    surf(X,Y,Zc);
    shading interp;
    hold off;
    drawnow;
    pause(dt);
end