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

#ifndef ALIBABACLOUD_NAS_MODEL_CREATEACCESSPOINTREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_CREATEACCESSPOINTREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT CreateAccessPointRequest : public RpcServiceRequest {
public:
	CreateAccessPointRequest();
	~CreateAccessPointRequest();
	std::string getVswId() const;
	void setVswId(const std::string &vswId);
	std::string getAccessPointName() const;
	void setAccessPointName(const std::string &accessPointName);
	int getPosixGroupId() const;
	void setPosixGroupId(int posixGroupId);
	std::string getPosixSecondaryGroupIds() const;
	void setPosixSecondaryGroupIds(const std::string &posixSecondaryGroupIds);
	std::string getFileSystemId() const;
	void setFileSystemId(const std::string &fileSystemId);
	int getOwnerGroupId() const;
	void setOwnerGroupId(int ownerGroupId);
	bool getEnabledRam() const;
	void setEnabledRam(bool enabledRam);
	int getOwnerUserId() const;
	void setOwnerUserId(int ownerUserId);
	std::string getPermission() const;
	void setPermission(const std::string &permission);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getProtocolType() const;
	void setProtocolType(const std::string &protocolType);
	std::string getRootDirectory() const;
	void setRootDirectory(const std::string &rootDirectory);
	std::string getAccessGroup() const;
	void setAccessGroup(const std::string &accessGroup);
	int getPosixUserId() const;
	void setPosixUserId(int posixUserId);

private:
	std::string vswId_;
	std::string accessPointName_;
	int posixGroupId_;
	std::string posixSecondaryGroupIds_;
	std::string fileSystemId_;
	int ownerGroupId_;
	bool enabledRam_;
	int ownerUserId_;
	std::string permission_;
	std::string vpcId_;
	std::string protocolType_;
	std::string rootDirectory_;
	std::string accessGroup_;
	int posixUserId_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_CREATEACCESSPOINTREQUEST_H_
