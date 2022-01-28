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

#ifndef ALIBABACLOUD_ENS_MODEL_EXPORTIMAGEREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_EXPORTIMAGEREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT ExportImageRequest : public RpcServiceRequest {
public:
	ExportImageRequest();
	~ExportImageRequest();
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getOSSRegionId() const;
	void setOSSRegionId(const std::string &oSSRegionId);
	std::string getOSSBucket() const;
	void setOSSBucket(const std::string &oSSBucket);
	std::string getRoleName() const;
	void setRoleName(const std::string &roleName);
	std::string getOSSPrefix() const;
	void setOSSPrefix(const std::string &oSSPrefix);

private:
	std::string imageId_;
	std::string oSSRegionId_;
	std::string oSSBucket_;
	std::string roleName_;
	std::string oSSPrefix_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_EXPORTIMAGEREQUEST_H_
