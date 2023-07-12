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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATEDATAARCHIVEORDERREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATEDATAARCHIVEORDERREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT CreateDataArchiveOrderRequest : public RpcServiceRequest {
public:
	struct Param {
		std::string string;
		std::vector<std::string> variables;
		std::string targetInstanceId;
		std::string string;
		std::vector<std::string> tableMapping;
		std::string string;
		std::vector<std::string> orderAfter;
		long sourceDatabaseId;
		std::string dbSchema;
		std::string runMethod;
		bool logic;
		std::string archiveMethod;
		struct TableIncludesItem {
			std::string tableWhere;
			std::string tableName;
		};
		TableIncludesItem tableIncludesItem;
		std::vector<TableIncludesItem> tableIncludes;
	};
	CreateDataArchiveOrderRequest();
	~CreateDataArchiveOrderRequest();
	long getTid() const;
	void setTid(long tid);
	long getParentId() const;
	void setParentId(long parentId);
	std::string getPluginType() const;
	void setPluginType(const std::string &pluginType);
	Param getParam() const;
	void setParam(const Param &param);
	std::vector<std::string> getRelatedUserList() const;
	void setRelatedUserList(const std::vector<std::string> &relatedUserList);
	std::string getComment() const;
	void setComment(const std::string &comment);

private:
	long tid_;
	long parentId_;
	std::string pluginType_;
	Param param_;
	std::vector<std::string> relatedUserList_;
	std::string comment_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATEDATAARCHIVEORDERREQUEST_H_
