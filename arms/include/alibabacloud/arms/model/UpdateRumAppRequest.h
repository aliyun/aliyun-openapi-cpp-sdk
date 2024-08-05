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

#ifndef ALIBABACLOUD_ARMS_MODEL_UPDATERUMAPPREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_UPDATERUMAPPREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT UpdateRumAppRequest : public RpcServiceRequest {
public:
	UpdateRumAppRequest();
	~UpdateRumAppRequest();
	bool getRestart() const;
	void setRestart(bool restart);
	bool getAutoRestart() const;
	void setAutoRestart(bool autoRestart);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getPid() const;
	void setPid(const std::string &pid);
	bool getStop() const;
	void setStop(bool stop);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNickname() const;
	void setNickname(const std::string &nickname);
	std::string getServiceDomainOperationJson() const;
	void setServiceDomainOperationJson(const std::string &serviceDomainOperationJson);
	bool getIsSubscribe() const;
	void setIsSubscribe(bool isSubscribe);
	std::string getBonreeSDKConfigJson() const;
	void setBonreeSDKConfigJson(const std::string &bonreeSDKConfigJson);

private:
	bool restart_;
	bool autoRestart_;
	std::string description_;
	std::string pid_;
	bool stop_;
	std::string regionId_;
	std::string nickname_;
	std::string serviceDomainOperationJson_;
	bool isSubscribe_;
	std::string bonreeSDKConfigJson_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_UPDATERUMAPPREQUEST_H_
