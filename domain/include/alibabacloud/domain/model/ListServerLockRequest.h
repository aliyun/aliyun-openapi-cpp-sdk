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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_LISTSERVERLOCKREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_LISTSERVERLOCKREQUEST_H_

#include <alibabacloud/domain/DomainExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Domain {
namespace Model {
class ALIBABACLOUD_DOMAIN_EXPORT ListServerLockRequest : public RpcServiceRequest {
public:
	ListServerLockRequest();
	~ListServerLockRequest();
	std::string getLockProductId() const;
	void setLockProductId(const std::string &lockProductId);
	long getEndExpireDate() const;
	void setEndExpireDate(long endExpireDate);
	int getPageNum() const;
	void setPageNum(int pageNum);
	long getBeginStartDate() const;
	void setBeginStartDate(long beginStartDate);
	std::string getOrderByType() const;
	void setOrderByType(const std::string &orderByType);
	int getServerLockStatus() const;
	void setServerLockStatus(int serverLockStatus);
	long getStartExpireDate() const;
	void setStartExpireDate(long startExpireDate);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	long getEndStartDate() const;
	void setEndStartDate(long endStartDate);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);

private:
	std::string lockProductId_;
	long endExpireDate_;
	int pageNum_;
	long beginStartDate_;
	std::string orderByType_;
	int serverLockStatus_;
	long startExpireDate_;
	int pageSize_;
	std::string lang_;
	std::string domainName_;
	std::string orderBy_;
	long endStartDate_;
	std::string userClientIp_;
};
} // namespace Model
} // namespace Domain
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DOMAIN_MODEL_LISTSERVERLOCKREQUEST_H_
