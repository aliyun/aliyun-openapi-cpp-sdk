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

#ifndef ALIBABACLOUD_RESOURCECENTER_MODEL_GETMULTIACCOUNTRESOURCECONFIGURATIONREQUEST_H_
#define ALIBABACLOUD_RESOURCECENTER_MODEL_GETMULTIACCOUNTRESOURCECONFIGURATIONREQUEST_H_

#include <alibabacloud/resourcecenter/ResourceCenterExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ResourceCenter {
namespace Model {
class ALIBABACLOUD_RESOURCECENTER_EXPORT GetMultiAccountResourceConfigurationRequest : public RpcServiceRequest {
public:
	GetMultiAccountResourceConfigurationRequest();
	~GetMultiAccountResourceConfigurationRequest();
	std::string getAccountId() const;
	void setAccountId(const std::string &accountId);
	std::string getResourceRegionId() const;
	void setResourceRegionId(const std::string &resourceRegionId);
	std::string getResourceId() const;
	void setResourceId(const std::string &resourceId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);

private:
	std::string accountId_;
	std::string resourceRegionId_;
	std::string resourceId_;
	std::string resourceType_;
};
} // namespace Model
} // namespace ResourceCenter
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RESOURCECENTER_MODEL_GETMULTIACCOUNTRESOURCECONFIGURATIONREQUEST_H_
