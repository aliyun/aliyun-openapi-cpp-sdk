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

#ifndef ALIBABACLOUD_LTL_MODEL_LISTDEPENDENTDATAMODELSREQUEST_H_
#define ALIBABACLOUD_LTL_MODEL_LISTDEPENDENTDATAMODELSREQUEST_H_

#include <alibabacloud/ltl/LtlExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ltl {
namespace Model {
class ALIBABACLOUD_LTL_EXPORT ListDependentDataModelsRequest : public RpcServiceRequest {
public:
	ListDependentDataModelsRequest();
	~ListDependentDataModelsRequest();
	std::string getApiVersion() const;
	void setApiVersion(const std::string &apiVersion);
	std::string getProductKey() const;
	void setProductKey(const std::string &productKey);

private:
	std::string apiVersion_;
	std::string productKey_;
};
} // namespace Model
} // namespace Ltl
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LTL_MODEL_LISTDEPENDENTDATAMODELSREQUEST_H_
