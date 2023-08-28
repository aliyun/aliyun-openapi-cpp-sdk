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

#ifndef ALIBABACLOUD_EFLO_MODEL_CREATEERATTACHMENTREQUEST_H_
#define ALIBABACLOUD_EFLO_MODEL_CREATEERATTACHMENTREQUEST_H_

#include <alibabacloud/eflo/EfloExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eflo {
namespace Model {
class ALIBABACLOUD_EFLO_EXPORT CreateErAttachmentRequest : public RpcServiceRequest {
public:
	CreateErAttachmentRequest();
	~CreateErAttachmentRequest();
	std::string getResourceTenantId() const;
	void setResourceTenantId(const std::string &resourceTenantId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getAutoReceiveAllRoute() const;
	void setAutoReceiveAllRoute(bool autoReceiveAllRoute);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getErAttachmentName() const;
	void setErAttachmentName(const std::string &erAttachmentName);
	std::string getErId() const;
	void setErId(const std::string &erId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);

private:
	std::string resourceTenantId_;
	std::string regionId_;
	bool autoReceiveAllRoute_;
	std::string instanceType_;
	std::string erAttachmentName_;
	std::string erId_;
	std::string instanceId_;
};
} // namespace Model
} // namespace Eflo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_MODEL_CREATEERATTACHMENTREQUEST_H_
