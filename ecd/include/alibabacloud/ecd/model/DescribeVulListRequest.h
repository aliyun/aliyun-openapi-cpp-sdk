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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEVULLISTREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEVULLISTREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT DescribeVulListRequest : public RpcServiceRequest {
public:
	DescribeVulListRequest();
	~DescribeVulListRequest();
	std::string getOfficeSiteId() const;
	void setOfficeSiteId(const std::string &officeSiteId);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getDealed() const;
	void setDealed(const std::string &dealed);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getAliasName() const;
	void setAliasName(const std::string &aliasName);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getNecessity() const;
	void setNecessity(const std::string &necessity);

private:
	std::string officeSiteId_;
	std::string type_;
	std::string regionId_;
	int pageSize_;
	std::string lang_;
	std::string dealed_;
	int currentPage_;
	std::string aliasName_;
	std::string name_;
	std::string necessity_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEVULLISTREQUEST_H_
