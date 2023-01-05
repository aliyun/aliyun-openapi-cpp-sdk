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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEBUSINESSREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEBUSINESSREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CreateBusinessRequest : public RpcServiceRequest {
public:
	CreateBusinessRequest();
	~CreateBusinessRequest();
	std::string getOwner() const;
	void setOwner(const std::string &owner);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getProjectIdentifier() const;
	void setProjectIdentifier(const std::string &projectIdentifier);
	std::string getBusinessName() const;
	void setBusinessName(const std::string &businessName);
	long getProjectId() const;
	void setProjectId(long projectId);
	std::string getUseType() const;
	void setUseType(const std::string &useType);

private:
	std::string owner_;
	std::string description_;
	std::string projectIdentifier_;
	std::string businessName_;
	long projectId_;
	std::string useType_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEBUSINESSREQUEST_H_
