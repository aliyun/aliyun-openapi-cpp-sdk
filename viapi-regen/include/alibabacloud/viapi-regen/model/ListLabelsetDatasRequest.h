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

#ifndef ALIBABACLOUD_VIAPI_REGEN_MODEL_LISTLABELSETDATASREQUEST_H_
#define ALIBABACLOUD_VIAPI_REGEN_MODEL_LISTLABELSETDATASREQUEST_H_

#include <alibabacloud/viapi-regen/Viapi_regenExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Viapi_regen {
namespace Model {
class ALIBABACLOUD_VIAPI_REGEN_EXPORT ListLabelsetDatasRequest : public RpcServiceRequest {
public:
	ListLabelsetDatasRequest();
	~ListLabelsetDatasRequest();
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getValue() const;
	void setValue(const std::string &value);
	long getCurrentPage() const;
	void setCurrentPage(long currentPage);
	bool getIsAbandon() const;
	void setIsAbandon(bool isAbandon);
	long getLabelId() const;
	void setLabelId(long labelId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getOperation() const;
	void setOperation(const std::string &operation);

private:
	long pageSize_;
	std::string value_;
	long currentPage_;
	bool isAbandon_;
	long labelId_;
	std::string name_;
	std::string operation_;
};
} // namespace Model
} // namespace Viapi_regen
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VIAPI_REGEN_MODEL_LISTLABELSETDATASREQUEST_H_
