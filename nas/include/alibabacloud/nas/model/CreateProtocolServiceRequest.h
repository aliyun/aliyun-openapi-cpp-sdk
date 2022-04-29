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

#ifndef ALIBABACLOUD_NAS_MODEL_CREATEPROTOCOLSERVICEREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_CREATEPROTOCOLSERVICEREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT CreateProtocolServiceRequest : public RpcServiceRequest {
public:
	CreateProtocolServiceRequest();
	~CreateProtocolServiceRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getMountTargetDescription() const;
	void setMountTargetDescription(const std::string &mountTargetDescription);
	std::string getMountTargetAccessGroupName() const;
	void setMountTargetAccessGroupName(const std::string &mountTargetAccessGroupName);
	std::string getMountTargetVSwitchId() const;
	void setMountTargetVSwitchId(const std::string &mountTargetVSwitchId);
	int getThroughput() const;
	void setThroughput(int throughput);
	std::string getFileSystemId() const;
	void setFileSystemId(const std::string &fileSystemId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getMountTargetFsetId() const;
	void setMountTargetFsetId(const std::string &mountTargetFsetId);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getMountTargetVpcId() const;
	void setMountTargetVpcId(const std::string &mountTargetVpcId);
	std::string getMountTargetPath() const;
	void setMountTargetPath(const std::string &mountTargetPath);
	std::string getProtocolSpec() const;
	void setProtocolSpec(const std::string &protocolSpec);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getProtocolType() const;
	void setProtocolType(const std::string &protocolType);

private:
	std::string clientToken_;
	std::string description_;
	std::string mountTargetDescription_;
	std::string mountTargetAccessGroupName_;
	std::string mountTargetVSwitchId_;
	int throughput_;
	std::string fileSystemId_;
	bool dryRun_;
	std::string mountTargetFsetId_;
	std::string vSwitchId_;
	std::string mountTargetVpcId_;
	std::string mountTargetPath_;
	std::string protocolSpec_;
	std::string vpcId_;
	std::string protocolType_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_CREATEPROTOCOLSERVICEREQUEST_H_
