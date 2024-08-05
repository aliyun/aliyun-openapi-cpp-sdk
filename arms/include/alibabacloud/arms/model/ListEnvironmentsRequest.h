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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTENVIRONMENTSREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTENVIRONMENTSREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT ListEnvironmentsRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	ListEnvironmentsRequest();
	~ListEnvironmentsRequest();
	std::string getFilterRegionIds() const;
	void setFilterRegionIds(const std::string &filterRegionIds);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getAddonName() const;
	void setAddonName(const std::string &addonName);
	std::string getEnvironmentType() const;
	void setEnvironmentType(const std::string &environmentType);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getBindResourceId() const;
	void setBindResourceId(const std::string &bindResourceId);
	std::string getFeePackage() const;
	void setFeePackage(const std::string &feePackage);

private:
	std::string filterRegionIds_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string addonName_;
	std::string environmentType_;
	std::vector<Tag> tag_;
	std::string bindResourceId_;
	std::string feePackage_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTENVIRONMENTSREQUEST_H_
