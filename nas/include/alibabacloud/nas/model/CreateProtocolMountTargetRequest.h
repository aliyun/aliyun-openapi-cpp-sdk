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

#ifndef ALIBABACLOUD_NAS_MODEL_CREATEPROTOCOLMOUNTTARGETREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_CREATEPROTOCOLMOUNTTARGETREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT CreateProtocolMountTargetRequest : public RpcServiceRequest {
public:
	CreateProtocolMountTargetRequest();
	~CreateProtocolMountTargetRequest();
	std::string getProtocolServiceId() const;
	void setProtocolServiceId(const std::string &protocolServiceId);
	std::string getFsetId() const;
	void setFsetId(const std::string &fsetId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getPath() const;
	void setPath(const std::string &path);
	std::string getFileSystemId() const;
	void setFileSystemId(const std::string &fileSystemId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getAccessGroupName() const;
	void setAccessGroupName(const std::string &accessGroupName);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);

private:
	std::string protocolServiceId_;
	std::string fsetId_;
	std::string clientToken_;
	std::string description_;
	std::string path_;
	std::string fileSystemId_;
	bool dryRun_;
	std::string accessGroupName_;
	std::string vSwitchId_;
	std::string vpcId_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_CREATEPROTOCOLMOUNTTARGETREQUEST_H_
