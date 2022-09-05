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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATEEVENTBRIDGEINTEGRATIONREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATEEVENTBRIDGEINTEGRATIONREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT CreateOrUpdateEventBridgeIntegrationRequest : public RpcServiceRequest {
public:
	CreateOrUpdateEventBridgeIntegrationRequest();
	~CreateOrUpdateEventBridgeIntegrationRequest();
	std::string getAccessSecret() const;
	void setAccessSecret(const std::string &accessSecret);
	std::string getEventBusRegionId() const;
	void setEventBusRegionId(const std::string &eventBusRegionId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getSource() const;
	void setSource(const std::string &source);
	std::string getEventBusName() const;
	void setEventBusName(const std::string &eventBusName);
	std::string getEndpoint() const;
	void setEndpoint(const std::string &endpoint);
	std::string getAccessKey() const;
	void setAccessKey(const std::string &accessKey);
	std::string getName() const;
	void setName(const std::string &name);
	long getId() const;
	void setId(long id);

private:
	std::string accessSecret_;
	std::string eventBusRegionId_;
	std::string description_;
	std::string source_;
	std::string eventBusName_;
	std::string endpoint_;
	std::string accessKey_;
	std::string name_;
	long id_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATEEVENTBRIDGEINTEGRATIONREQUEST_H_
