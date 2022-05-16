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

#ifndef ALIBABACLOUD_SAE_MODEL_TAGRESOURCESREQUEST_H_
#define ALIBABACLOUD_SAE_MODEL_TAGRESOURCESREQUEST_H_

#include <alibabacloud/sae/SaeExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sae {
namespace Model {
class ALIBABACLOUD_SAE_EXPORT TagResourcesRequest : public RoaServiceRequest {
public:
	TagResourcesRequest();
	~TagResourcesRequest();
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getResourceIds() const;
	void setResourceIds(const std::string &resourceIds);

private:
	std::string regionId_;
	std::string resourceType_;
	std::string tags_;
	std::string resourceIds_;
};
} // namespace Model
} // namespace Sae
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAE_MODEL_TAGRESOURCESREQUEST_H_
