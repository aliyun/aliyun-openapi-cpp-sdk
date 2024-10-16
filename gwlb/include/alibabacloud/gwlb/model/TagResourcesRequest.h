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

#ifndef ALIBABACLOUD_GWLB_MODEL_TAGRESOURCESREQUEST_H_
#define ALIBABACLOUD_GWLB_MODEL_TAGRESOURCESREQUEST_H_

#include <alibabacloud/gwlb/GwlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gwlb {
namespace Model {
class ALIBABACLOUD_GWLB_EXPORT TagResourcesRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	TagResourcesRequest();
	~TagResourcesRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::vector<std::string> getResourceId() const;
	void setResourceId(const std::vector<std::string> &resourceId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);

private:
	std::string clientToken_;
	std::vector<Tag> tag_;
	std::vector<std::string> resourceId_;
	bool dryRun_;
	std::string resourceType_;
};
} // namespace Model
} // namespace Gwlb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GWLB_MODEL_TAGRESOURCESREQUEST_H_
