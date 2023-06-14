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

#ifndef ALIBABACLOUD_GA_MODEL_UPDATEAPPLICATIONMONITORREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_UPDATEAPPLICATIONMONITORREQUEST_H_

#include <alibabacloud/ga/GaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ga {
namespace Model {
class ALIBABACLOUD_GA_EXPORT UpdateApplicationMonitorRequest : public RpcServiceRequest {
public:
	UpdateApplicationMonitorRequest();
	~UpdateApplicationMonitorRequest();
	bool getDetectEnable() const;
	void setDetectEnable(bool detectEnable);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getTaskName() const;
	void setTaskName(const std::string &taskName);
	std::string getListenerId() const;
	void setListenerId(const std::string &listenerId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getSilenceTime() const;
	void setSilenceTime(int silenceTime);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getAddress() const;
	void setAddress(const std::string &address);
	int getDetectThreshold() const;
	void setDetectThreshold(int detectThreshold);
	std::string getOptionsJson() const;
	void setOptionsJson(const std::string &optionsJson);
	int getDetectTimes() const;
	void setDetectTimes(int detectTimes);

private:
	bool detectEnable_;
	std::string clientToken_;
	std::string taskName_;
	std::string listenerId_;
	std::string regionId_;
	int silenceTime_;
	std::string taskId_;
	std::string address_;
	int detectThreshold_;
	std::string optionsJson_;
	int detectTimes_;
};
} // namespace Model
} // namespace Ga
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GA_MODEL_UPDATEAPPLICATIONMONITORREQUEST_H_
