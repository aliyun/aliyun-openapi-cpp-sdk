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

#ifndef ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBESOARRECORDACTIONOUTPUTLISTREQUEST_H_
#define ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBESOARRECORDACTIONOUTPUTLISTREQUEST_H_

#include <alibabacloud/sophonsoar/SophonsoarExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sophonsoar {
namespace Model {
class ALIBABACLOUD_SOPHONSOAR_EXPORT DescribeSoarRecordActionOutputListRequest : public RpcServiceRequest {
public:
	DescribeSoarRecordActionOutputListRequest();
	~DescribeSoarRecordActionOutputListRequest();
	std::string getActionUuid() const;
	void setActionUuid(const std::string &actionUuid);
	std::string getRoleFor() const;
	void setRoleFor(const std::string &roleFor);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getRoleType() const;
	void setRoleType(const std::string &roleType);
	std::string getQueryValue() const;
	void setQueryValue(const std::string &queryValue);
	std::string getLang() const;
	void setLang(const std::string &lang);

private:
	std::string actionUuid_;
	std::string roleFor_;
	int pageNumber_;
	int pageSize_;
	std::string roleType_;
	std::string queryValue_;
	std::string lang_;
};
} // namespace Model
} // namespace Sophonsoar
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBESOARRECORDACTIONOUTPUTLISTREQUEST_H_
