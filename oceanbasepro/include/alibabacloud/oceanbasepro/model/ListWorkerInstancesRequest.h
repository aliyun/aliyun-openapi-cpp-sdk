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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_LISTWORKERINSTANCESREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_LISTWORKERINSTANCESREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT ListWorkerInstancesRequest : public RpcServiceRequest {
public:
	ListWorkerInstancesRequest();
	~ListWorkerInstancesRequest();
	bool getOnlyBindable() const;
	void setOnlyBindable(bool onlyBindable);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::vector<std::string> getSpecs() const;
	void setSpecs(const std::vector<std::string> &specs);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getSourceType() const;
	void setSourceType(const std::string &sourceType);
	std::string getDestType() const;
	void setDestType(const std::string &destType);

private:
	bool onlyBindable_;
	int pageNumber_;
	std::vector<std::string> specs_;
	std::string instanceName_;
	int pageSize_;
	std::string sourceType_;
	std::string destType_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_LISTWORKERINSTANCESREQUEST_H_
