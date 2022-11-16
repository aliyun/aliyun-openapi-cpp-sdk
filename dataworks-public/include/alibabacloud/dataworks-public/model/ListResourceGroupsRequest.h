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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTRESOURCEGROUPSREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTRESOURCEGROUPSREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListResourceGroupsRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string value;
		std::string key;
	};
	ListResourceGroupsRequest();
	~ListResourceGroupsRequest();
	std::string getBizExtKey() const;
	void setBizExtKey(const std::string &bizExtKey);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::string getResourceManagerResourceGroupId() const;
	void setResourceManagerResourceGroupId(const std::string &resourceManagerResourceGroupId);
	int getResourceGroupType() const;
	void setResourceGroupType(int resourceGroupType);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);

private:
	std::string bizExtKey_;
	std::vector<Tags> tags_;
	std::string resourceManagerResourceGroupId_;
	int resourceGroupType_;
	std::string keyword_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTRESOURCEGROUPSREQUEST_H_
