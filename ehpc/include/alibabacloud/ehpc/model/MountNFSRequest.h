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

#ifndef ALIBABACLOUD_EHPC_MODEL_MOUNTNFSREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_MOUNTNFSREQUEST_H_

#include <alibabacloud/ehpc/EHPCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT MountNFSRequest : public RpcServiceRequest {
public:
	MountNFSRequest();
	~MountNFSRequest();
	std::string getMountDir() const;
	void setMountDir(const std::string &mountDir);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getRemoteDir() const;
	void setRemoteDir(const std::string &remoteDir);
	std::string getNfsDir() const;
	void setNfsDir(const std::string &nfsDir);
	std::string getProtocolType() const;
	void setProtocolType(const std::string &protocolType);

private:
	std::string mountDir_;
	std::string accessKeyId_;
	std::string instanceId_;
	std::string remoteDir_;
	std::string nfsDir_;
	std::string protocolType_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_MOUNTNFSREQUEST_H_
