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

#ifndef ALIBABACLOUD_EFLO_MODEL_LISTSUBNETSREQUEST_H_
#define ALIBABACLOUD_EFLO_MODEL_LISTSUBNETSREQUEST_H_

#include <alibabacloud/eflo/EfloExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eflo {
namespace Model {
class ALIBABACLOUD_EFLO_EXPORT ListSubnetsRequest : public RpcServiceRequest {
public:
	ListSubnetsRequest();
	~ListSubnetsRequest();
	std::string getType() const;
	void setType(const std::string &type);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getSubnetId() const;
	void setSubnetId(const std::string &subnetId);
	std::string getVpdId() const;
	void setVpdId(const std::string &vpdId);
	bool getEnablePage() const;
	void setEnablePage(bool enablePage);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string type_;
	int pageNumber_;
	std::string regionId_;
	int pageSize_;
	std::string subnetId_;
	std::string vpdId_;
	bool enablePage_;
	std::string name_;
	std::string zoneId_;
	std::string status_;
};
} // namespace Model
} // namespace Eflo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_MODEL_LISTSUBNETSREQUEST_H_
