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

#ifndef ALIBABACLOUD_CDN_MODEL_TAGRESOURCESREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_TAGRESOURCESREQUEST_H_

#include <alibabacloud/cdn/CdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cdn {
namespace Model {
class ALIBABACLOUD_CDN_EXPORT TagResourcesRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string key;
		std::string value;
	};
	TagResourcesRequest();
	~TagResourcesRequest();
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::vector<std::string> getResourceId() const;
	void setResourceId(const std::vector<std::string> &resourceId);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);

private:
	std::vector<Tag> tag_;
	std::vector<std::string> resourceId_;
	long ownerId_;
	std::string resourceType_;
};
} // namespace Model
} // namespace Cdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CDN_MODEL_TAGRESOURCESREQUEST_H_
