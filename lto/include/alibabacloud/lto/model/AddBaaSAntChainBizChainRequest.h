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

#ifndef ALIBABACLOUD_LTO_MODEL_ADDBAASANTCHAINBIZCHAINREQUEST_H_
#define ALIBABACLOUD_LTO_MODEL_ADDBAASANTCHAINBIZCHAINREQUEST_H_

#include <alibabacloud/lto/LtoExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Lto {
namespace Model {
class ALIBABACLOUD_LTO_EXPORT AddBaaSAntChainBizChainRequest : public RpcServiceRequest {
public:
	AddBaaSAntChainBizChainRequest();
	~AddBaaSAntChainBizChainRequest();
	std::string getCaCertPassword() const;
	void setCaCertPassword(const std::string &caCertPassword);
	std::string getNodeNameList() const;
	void setNodeNameList(const std::string &nodeNameList);
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getUserKey() const;
	void setUserKey(const std::string &userKey);
	std::string getClientCert() const;
	void setClientCert(const std::string &clientCert);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getBaaSAntChainConsortiumId() const;
	void setBaaSAntChainConsortiumId(const std::string &baaSAntChainConsortiumId);
	std::string getUserKeyPassword() const;
	void setUserKeyPassword(const std::string &userKeyPassword);
	std::string getBaaSAntChainChainId() const;
	void setBaaSAntChainChainId(const std::string &baaSAntChainChainId);
	std::string getClientKey() const;
	void setClientKey(const std::string &clientKey);
	std::string getCaCert() const;
	void setCaCert(const std::string &caCert);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getClientKeyPassword() const;
	void setClientKeyPassword(const std::string &clientKeyPassword);
	std::string getContractTemplateIdList() const;
	void setContractTemplateIdList(const std::string &contractTemplateIdList);
	std::string getUserName() const;
	void setUserName(const std::string &userName);

private:
	std::string caCertPassword_;
	std::string nodeNameList_;
	std::string remark_;
	std::string userKey_;
	std::string clientCert_;
	std::string regionId_;
	std::string baaSAntChainConsortiumId_;
	std::string userKeyPassword_;
	std::string baaSAntChainChainId_;
	std::string clientKey_;
	std::string caCert_;
	std::string name_;
	std::string clientKeyPassword_;
	std::string contractTemplateIdList_;
	std::string userName_;
};
} // namespace Model
} // namespace Lto
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LTO_MODEL_ADDBAASANTCHAINBIZCHAINREQUEST_H_
