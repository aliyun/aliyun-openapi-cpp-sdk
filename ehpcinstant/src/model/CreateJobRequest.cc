/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/ehpcinstant/model/CreateJobRequest.h>

using AlibabaCloud::EhpcInstant::Model::CreateJobRequest;

CreateJobRequest::CreateJobRequest()
    : RpcServiceRequest("ehpcinstant", "2023-07-01", "CreateJob") {
  setMethod(HttpRequest::Method::Post);
}

CreateJobRequest::~CreateJobRequest() {}

CreateJobRequest::MonitorPolicy CreateJobRequest::getMonitorPolicy() const {
  return monitorPolicy_;
}

void CreateJobRequest::setMonitorPolicy(const CreateJobRequest::MonitorPolicy &monitorPolicy) {
  monitorPolicy_ = monitorPolicy;
  for(int dep1 = 0; dep1 != monitorPolicy.notificationSpec.mNSTopic.size(); dep1++) {
    for(int dep2 = 0; dep2 != monitorPolicy.notificationSpec.mNSTopic[dep1].event.size(); dep2++) {
      setParameter(std::string("MonitorPolicy") + ".NotificationSpec.MNSTopic." + std::to_string(dep1 + 1) + ".Event." + std::to_string(dep2 + 1), monitorPolicy.notificationSpec.mNSTopic[dep1].event[dep2]);
    }
    setParameter(std::string("MonitorPolicy") + ".NotificationSpec.MNSTopic." + std::to_string(dep1 + 1) + ".TopicLocation", monitorPolicy.notificationSpec.mNSTopic[dep1].topicLocation);
  }
}

std::string CreateJobRequest::getJobDescription() const {
  return jobDescription_;
}

void CreateJobRequest::setJobDescription(const std::string &jobDescription) {
  jobDescription_ = jobDescription;
  setParameter(std::string("JobDescription"), jobDescription);
}

CreateJobRequest::DeploymentPolicy CreateJobRequest::getDeploymentPolicy() const {
  return deploymentPolicy_;
}

void CreateJobRequest::setDeploymentPolicy(const CreateJobRequest::DeploymentPolicy &deploymentPolicy) {
  deploymentPolicy_ = deploymentPolicy;
  setParameter(std::string("DeploymentPolicy") + ".AllocationSpec", deploymentPolicy.allocationSpec);
  setParameter(std::string("DeploymentPolicy") + ".Network.EnableERI", deploymentPolicy.network.enableERI ? "true" : "false");
  for(int dep1 = 0; dep1 != deploymentPolicy.network.vswitch.size(); dep1++) {
    setParameter(std::string("DeploymentPolicy") + ".Network.Vswitch." + std::to_string(dep1 + 1), deploymentPolicy.network.vswitch[dep1]);
  }
  setParameter(std::string("DeploymentPolicy") + ".Network.EnableENIMapping", deploymentPolicy.network.enableENIMapping ? "true" : "false");
}

std::string CreateJobRequest::getJobName() const {
  return jobName_;
}

void CreateJobRequest::setJobName(const std::string &jobName) {
  jobName_ = jobName;
  setParameter(std::string("JobName"), jobName);
}

std::vector<CreateJobRequest::Tasks> CreateJobRequest::getTasks() const {
  return tasks_;
}

void CreateJobRequest::setTasks(const std::vector<CreateJobRequest::Tasks> &tasks) {
  tasks_ = tasks;
  for(int dep1 = 0; dep1 != tasks.size(); dep1++) {
    setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSustainable", tasks[dep1].taskSustainable ? "true" : "false");
    setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskName", tasks[dep1].taskName);
    setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".ExecutorPolicy.MaxCount", std::to_string(tasks[dep1].executorPolicy.maxCount));
    setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".ExecutorPolicy.ArraySpec.IndexStart", std::to_string(tasks[dep1].executorPolicy.arraySpec.indexStart));
    setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".ExecutorPolicy.ArraySpec.IndexStep", std::to_string(tasks[dep1].executorPolicy.arraySpec.indexStep));
    setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".ExecutorPolicy.ArraySpec.IndexEnd", std::to_string(tasks[dep1].executorPolicy.arraySpec.indexEnd));
    for(int dep2 = 0; dep2 != tasks[dep1].taskSpec.volumeMount.size(); dep2++) {
      setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.VolumeMount." + std::to_string(dep2 + 1) + ".MountOptions", tasks[dep1].taskSpec.volumeMount[dep2].mountOptions);
      setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.VolumeMount." + std::to_string(dep2 + 1) + ".VolumeDriver", tasks[dep1].taskSpec.volumeMount[dep2].volumeDriver);
      setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.VolumeMount." + std::to_string(dep2 + 1) + ".MountPath", tasks[dep1].taskSpec.volumeMount[dep2].mountPath);
    }
    setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.RetryPolicy.RetryCount", std::to_string(tasks[dep1].taskSpec.retryPolicy.retryCount));
    for(int dep2 = 0; dep2 != tasks[dep1].taskSpec.retryPolicy.exitCodeActions.size(); dep2++) {
      setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.RetryPolicy.ExitCodeActions." + std::to_string(dep2 + 1) + ".Action", tasks[dep1].taskSpec.retryPolicy.exitCodeActions[dep2].action);
      setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.RetryPolicy.ExitCodeActions." + std::to_string(dep2 + 1) + ".ExitCode", tasks[dep1].taskSpec.retryPolicy.exitCodeActions[dep2].exitCode);
    }
    setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.Resource.Cores", std::to_string(tasks[dep1].taskSpec.resource.cores));
    setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.Resource.Memory", std::to_string(tasks[dep1].taskSpec.resource.memory));
    for(int dep2 = 0; dep2 != tasks[dep1].taskSpec.resource.disks.size(); dep2++) {
      setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.Resource.Disks." + std::to_string(dep2 + 1) + ".Size", std::to_string(tasks[dep1].taskSpec.resource.disks[dep2].size));
      setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.Resource.Disks." + std::to_string(dep2 + 1) + ".Type", tasks[dep1].taskSpec.resource.disks[dep2].type);
    }
    setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.Resource.EnableHT", tasks[dep1].taskSpec.resource.enableHT ? "true" : "false");
    setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.TaskDuration", tasks[dep1].taskSpec.taskDuration);
    for(int dep2 = 0; dep2 != tasks[dep1].taskSpec.taskExecutor.size(); dep2++) {
      setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.TaskExecutor." + std::to_string(dep2 + 1) + ".Container.Image", tasks[dep1].taskSpec.taskExecutor[dep2].container.image);
      for(int dep3 = 0; dep3 != tasks[dep1].taskSpec.taskExecutor[dep2].container.environmentVars.size(); dep3++) {
        setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.TaskExecutor." + std::to_string(dep2 + 1) + ".Container.EnvironmentVars." + std::to_string(dep3 + 1) + ".Name", tasks[dep1].taskSpec.taskExecutor[dep2].container.environmentVars[dep3].name);
        setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.TaskExecutor." + std::to_string(dep2 + 1) + ".Container.EnvironmentVars." + std::to_string(dep3 + 1) + ".Value", tasks[dep1].taskSpec.taskExecutor[dep2].container.environmentVars[dep3].value);
      }
      setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.TaskExecutor." + std::to_string(dep2 + 1) + ".Container.WorkingDir", tasks[dep1].taskSpec.taskExecutor[dep2].container.workingDir);
      for(int dep3 = 0; dep3 != tasks[dep1].taskSpec.taskExecutor[dep2].container.command.size(); dep3++) {
        setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.TaskExecutor." + std::to_string(dep2 + 1) + ".Container.Command." + std::to_string(dep3 + 1), tasks[dep1].taskSpec.taskExecutor[dep2].container.command[dep3]);
      }
      setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.TaskExecutor." + std::to_string(dep2 + 1) + ".VM.Image", tasks[dep1].taskSpec.taskExecutor[dep2].vM.image);
      setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.TaskExecutor." + std::to_string(dep2 + 1) + ".VM.PrologScript", tasks[dep1].taskSpec.taskExecutor[dep2].vM.prologScript);
      for(int dep3 = 0; dep3 != tasks[dep1].taskSpec.taskExecutor[dep2].vM.environmentVars.size(); dep3++) {
        setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.TaskExecutor." + std::to_string(dep2 + 1) + ".VM.EnvironmentVars." + std::to_string(dep3 + 1) + ".Name", tasks[dep1].taskSpec.taskExecutor[dep2].vM.environmentVars[dep3].name);
        setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.TaskExecutor." + std::to_string(dep2 + 1) + ".VM.EnvironmentVars." + std::to_string(dep3 + 1) + ".Value", tasks[dep1].taskSpec.taskExecutor[dep2].vM.environmentVars[dep3].value);
      }
      setParameter(std::string("Tasks") + "." + std::to_string(dep1 + 1) + ".TaskSpec.TaskExecutor." + std::to_string(dep2 + 1) + ".VM.Script", tasks[dep1].taskSpec.taskExecutor[dep2].vM.script);
    }
  }
}

