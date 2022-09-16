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

#ifndef ALIBABACLOUD_ECD_MODEL_CREATEDRIVEREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_CREATEDRIVEREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT CreateDriveRequest : public RpcServiceRequest {
public:
	CreateDriveRequest();
	~CreateDriveRequest();
	bool getProfileRoaming() const;
	void setProfileRoaming(bool profileRoaming);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getUserId() const;
	void setUserId(const std::string &userId);
	std::string getDomainId() const;
	void setDomainId(const std::string &domainId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getExternalDomainId() const;
	void setExternalDomainId(const std::string &externalDomainId);
	long getUsedSize() const;
	void setUsedSize(long usedSize);
	long getAliUid() const;
	void setAliUid(long aliUid);
	std::string getDriveName() const;
	void setDriveName(const std::string &driveName);
	long getTotalSize() const;
	void setTotalSize(long totalSize);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);

private:
	bool profileRoaming_;
	std::string description_;
	std::string type_;
	std::string userId_;
	std::string domainId_;
	std::string regionId_;
	std::string externalDomainId_;
	long usedSize_;
	long aliUid_;
	std::string driveName_;
	long totalSize_;
	std::string resourceType_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_CREATEDRIVEREQUEST_H_
