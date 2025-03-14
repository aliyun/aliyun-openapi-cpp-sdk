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

#ifndef ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBEPLAYBOOKSREQUEST_H_
#define ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBEPLAYBOOKSREQUEST_H_

#include <alibabacloud/sophonsoar/SophonsoarExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sophonsoar {
namespace Model {
class ALIBABACLOUD_SOPHONSOAR_EXPORT DescribePlaybooksRequest : public RpcServiceRequest {
public:
	DescribePlaybooksRequest();
	~DescribePlaybooksRequest();
	std::string getRoleFor() const;
	void setRoleFor(const std::string &roleFor);
	long getEndMillis() const;
	void setEndMillis(long endMillis);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getPlaybookUuids() const;
	void setPlaybookUuids(const std::string &playbookUuids);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getRoleType() const;
	void setRoleType(const std::string &roleType);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getOrder() const;
	void setOrder(const std::string &order);
	std::string getParamTypes() const;
	void setParamTypes(const std::string &paramTypes);
	int getActive() const;
	void setActive(int active);
	std::string getOwnType() const;
	void setOwnType(const std::string &ownType);
	std::string getSort() const;
	void setSort(const std::string &sort);
	long getStartMillis() const;
	void setStartMillis(long startMillis);
	std::string getPlaybookUuid() const;
	void setPlaybookUuid(const std::string &playbookUuid);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string roleFor_;
	long endMillis_;
	long pageNumber_;
	std::string playbookUuids_;
	int pageSize_;
	std::string roleType_;
	std::string lang_;
	std::string order_;
	std::string paramTypes_;
	int active_;
	std::string ownType_;
	std::string sort_;
	long startMillis_;
	std::string playbookUuid_;
	std::string name_;
};
} // namespace Model
} // namespace Sophonsoar
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBEPLAYBOOKSREQUEST_H_
