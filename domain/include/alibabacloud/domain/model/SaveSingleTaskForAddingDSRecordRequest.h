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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_SAVESINGLETASKFORADDINGDSRECORDREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_SAVESINGLETASKFORADDINGDSRECORDREQUEST_H_

#include <alibabacloud/domain/DomainExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Domain {
namespace Model {
class ALIBABACLOUD_DOMAIN_EXPORT SaveSingleTaskForAddingDSRecordRequest : public RpcServiceRequest {
public:
	SaveSingleTaskForAddingDSRecordRequest();
	~SaveSingleTaskForAddingDSRecordRequest();
	int getKeyTag() const;
	void setKeyTag(int keyTag);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);
	int getDigestType() const;
	void setDigestType(int digestType);
	std::string getDigest() const;
	void setDigest(const std::string &digest);
	std::string getLang() const;
	void setLang(const std::string &lang);
	int getAlgorithm() const;
	void setAlgorithm(int algorithm);

private:
	int keyTag_;
	std::string domainName_;
	std::string userClientIp_;
	int digestType_;
	std::string digest_;
	std::string lang_;
	int algorithm_;
};
} // namespace Model
} // namespace Domain
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DOMAIN_MODEL_SAVESINGLETASKFORADDINGDSRECORDREQUEST_H_
