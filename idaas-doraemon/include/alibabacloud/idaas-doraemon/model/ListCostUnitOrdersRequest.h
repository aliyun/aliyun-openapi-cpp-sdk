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

#ifndef ALIBABACLOUD_IDAAS_DORAEMON_MODEL_LISTCOSTUNITORDERSREQUEST_H_
#define ALIBABACLOUD_IDAAS_DORAEMON_MODEL_LISTCOSTUNITORDERSREQUEST_H_

#include <alibabacloud/idaas-doraemon/Idaas_doraemonExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Idaas_doraemon {
namespace Model {
class ALIBABACLOUD_IDAAS_DORAEMON_EXPORT ListCostUnitOrdersRequest : public RpcServiceRequest {
public:
	ListCostUnitOrdersRequest();
	~ListCostUnitOrdersRequest();
	std::string getBeginDate() const;
	void setBeginDate(const std::string &beginDate);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getFinalDate() const;
	void setFinalDate(const std::string &finalDate);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	std::string beginDate_;
	int pageNumber_;
	std::string finalDate_;
	int pageSize_;
};
} // namespace Model
} // namespace Idaas_doraemon
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IDAAS_DORAEMON_MODEL_LISTCOSTUNITORDERSREQUEST_H_
