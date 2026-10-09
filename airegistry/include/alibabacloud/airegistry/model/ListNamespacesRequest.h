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

#ifndef ALIBABACLOUD_AIREGISTRY_MODEL_LISTNAMESPACESREQUEST_H_
#define ALIBABACLOUD_AIREGISTRY_MODEL_LISTNAMESPACESREQUEST_H_

#include <alibabacloud/airegistry/AIRegistryExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace AIRegistry {
namespace Model {
class ALIBABACLOUD_AIREGISTRY_EXPORT ListNamespacesRequest : public RpcServiceRequest {
public:
	ListNamespacesRequest();
	~ListNamespacesRequest();
	std::string getTags() const;
	void setTags(const std::string &tags);
	int getPageNo() const;
	void setPageNo(int pageNo);
	std::string getName() const;
	void setName(const std::string &name);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	std::string tags_;
	int pageNo_;
	std::string name_;
	int pageSize_;
};
} // namespace Model
} // namespace AIRegistry
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AIREGISTRY_MODEL_LISTNAMESPACESREQUEST_H_
