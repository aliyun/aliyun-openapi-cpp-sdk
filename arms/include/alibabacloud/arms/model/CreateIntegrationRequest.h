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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATEINTEGRATIONREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATEINTEGRATIONREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT CreateIntegrationRequest : public RpcServiceRequest {
public:
	CreateIntegrationRequest();
	~CreateIntegrationRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	bool getAutoRecover() const;
	void setAutoRecover(bool autoRecover);
	long getRecoverTime() const;
	void setRecoverTime(long recoverTime);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getIntegrationName() const;
	void setIntegrationName(const std::string &integrationName);
	std::string getIntegrationProductType() const;
	void setIntegrationProductType(const std::string &integrationProductType);

private:
	std::string description_;
	bool autoRecover_;
	long recoverTime_;
	std::string regionId_;
	std::string integrationName_;
	std::string integrationProductType_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATEINTEGRATIONREQUEST_H_
