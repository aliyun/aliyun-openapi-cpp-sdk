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

#ifndef ALIBABACLOUD_EHPC_MODEL_SETGWSCLUSTERPOLICYREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_SETGWSCLUSTERPOLICYREQUEST_H_

#include <alibabacloud/ehpc/EHPCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT SetGWSClusterPolicyRequest : public RpcServiceRequest {
public:
	SetGWSClusterPolicyRequest();
	~SetGWSClusterPolicyRequest();
	std::string getWatermark() const;
	void setWatermark(const std::string &watermark);
	std::string getLocalDrive() const;
	void setLocalDrive(const std::string &localDrive);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getClipboard() const;
	void setClipboard(const std::string &clipboard);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getUsbRedirect() const;
	void setUsbRedirect(const std::string &usbRedirect);
	bool getAsyncMode() const;
	void setAsyncMode(bool asyncMode);
	std::string getUdpPort() const;
	void setUdpPort(const std::string &udpPort);

private:
	std::string watermark_;
	std::string localDrive_;
	std::string clusterId_;
	std::string clipboard_;
	std::string accessKeyId_;
	std::string usbRedirect_;
	bool asyncMode_;
	std::string udpPort_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_SETGWSCLUSTERPOLICYREQUEST_H_
