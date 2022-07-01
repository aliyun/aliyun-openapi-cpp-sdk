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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DELETEPORTREQUEST_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DELETEPORTREQUEST_H_

#include <alibabacloud/ddoscoo/DdoscooExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ddoscoo {
namespace Model {
class ALIBABACLOUD_DDOSCOO_EXPORT DeletePortRequest : public RpcServiceRequest {
public:
	DeletePortRequest();
	~DeletePortRequest();
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getBackendPort() const;
	void setBackendPort(const std::string &backendPort);
	std::string getFrontendProtocol() const;
	void setFrontendProtocol(const std::string &frontendProtocol);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::vector<std::string> getRealServers() const;
	void setRealServers(const std::vector<std::string> &realServers);
	std::string getFrontendPort() const;
	void setFrontendPort(const std::string &frontendPort);

private:
	std::string sourceIp_;
	std::string backendPort_;
	std::string frontendProtocol_;
	std::string instanceId_;
	std::vector<std::string> realServers_;
	std::string frontendPort_;
};
} // namespace Model
} // namespace Ddoscoo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DELETEPORTREQUEST_H_
