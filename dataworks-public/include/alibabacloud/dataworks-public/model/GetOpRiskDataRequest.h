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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETOPRISKDATAREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETOPRISKDATAREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetOpRiskDataRequest : public RpcServiceRequest {
public:
	GetOpRiskDataRequest();
	~GetOpRiskDataRequest();
	std::string getDate() const;
	void setDate(const std::string &date);
	std::string getRiskType() const;
	void setRiskType(const std::string &riskType);
	int getPageNo() const;
	void setPageNo(int pageNo);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string date_;
	std::string riskType_;
	int pageNo_;
	int pageSize_;
	std::string name_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETOPRISKDATAREQUEST_H_
