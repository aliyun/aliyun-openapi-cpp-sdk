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

#ifndef ALIBABACLOUD_SAE_MODEL_EXECJOBREQUEST_H_
#define ALIBABACLOUD_SAE_MODEL_EXECJOBREQUEST_H_

#include <alibabacloud/sae/SaeExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sae {
namespace Model {
class ALIBABACLOUD_SAE_EXPORT ExecJobRequest : public RoaServiceRequest {
public:
	ExecJobRequest();
	~ExecJobRequest();
	std::string getEventId() const;
	void setEventId(const std::string &eventId);
	std::string getJarStartOptions() const;
	void setJarStartOptions(const std::string &jarStartOptions);
	std::string getJarStartArgs() const;
	void setJarStartArgs(const std::string &jarStartArgs);
	std::string getCommandArgs() const;
	void setCommandArgs(const std::string &commandArgs);
	std::string getReplicas() const;
	void setReplicas(const std::string &replicas);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getEnvs() const;
	void setEnvs(const std::string &envs);
	std::string getTime() const;
	void setTime(const std::string &time);
	std::string getCommand() const;
	void setCommand(const std::string &command);
	std::string getWarStartOptions() const;
	void setWarStartOptions(const std::string &warStartOptions);

private:
	std::string eventId_;
	std::string jarStartOptions_;
	std::string jarStartArgs_;
	std::string commandArgs_;
	std::string replicas_;
	std::string appId_;
	std::string envs_;
	std::string time_;
	std::string command_;
	std::string warStartOptions_;
};
} // namespace Model
} // namespace Sae
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAE_MODEL_EXECJOBREQUEST_H_
