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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATETABLEADDCOLUMNREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATETABLEADDCOLUMNREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT UpdateTableAddColumnRequest : public RpcServiceRequest {
public:
	struct Column {
		std::string columnNameCn;
		std::string comment;
		std::string columnName;
		std::string columnType;
	};
	UpdateTableAddColumnRequest();
	~UpdateTableAddColumnRequest();
	std::vector<Column> getColumn() const;
	void setColumn(const std::vector<Column> &column);
	std::string getTableGuid() const;
	void setTableGuid(const std::string &tableGuid);

private:
	std::vector<Column> column_;
	std::string tableGuid_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATETABLEADDCOLUMNREQUEST_H_
