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

#ifndef ALIBABACLOUD_CSAS_MODEL_CREATEPRIVATEACCESSAPPLICATIONREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_CREATEPRIVATEACCESSAPPLICATIONREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT CreatePrivateAccessApplicationRequest : public RpcServiceRequest {
public:
	struct PortRanges {
		int end;
		int begin;
	};
	CreatePrivateAccessApplicationRequest();
	~CreatePrivateAccessApplicationRequest();
	std::vector<std::string> getAddresses() const;
	void setAddresses(const std::vector<std::string> &addresses);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getProtocol() const;
	void setProtocol(const std::string &protocol);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::vector<std::string> getTagIds() const;
	void setTagIds(const std::vector<std::string> &tagIds);
	std::vector<PortRanges> getPortRanges() const;
	void setPortRanges(const std::vector<PortRanges> &portRanges);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::vector<std::string> addresses_;
	std::string description_;
	std::string protocol_;
	std::string sourceIp_;
	std::vector<std::string> tagIds_;
	std::vector<PortRanges> portRanges_;
	std::string name_;
	std::string status_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_CREATEPRIVATEACCESSAPPLICATIONREQUEST_H_
