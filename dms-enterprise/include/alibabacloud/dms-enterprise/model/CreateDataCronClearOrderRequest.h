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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATEDATACRONCLEARORDERREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATEDATACRONCLEARORDERREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT CreateDataCronClearOrderRequest : public RpcServiceRequest {
public:
	struct Param {
		std::string classify;
		struct DbItemListItem {
			long dbId;
			bool logic;
		};
		DbItemListItem dbItemListItem;
		std::vector<DbItemListItem> dbItemList;
		struct CronClearItemListItem {
			std::string filterSQL;
			long remainDays;
			std::string tableName;
			std::string columnName;
			std::string timeUnit;
		};
		CronClearItemListItem cronClearItemListItem;
		std::vector<CronClearItemListItem> cronClearItemList;
		long durationHour;
		std::string cronFormat;
		bool specifyDuration;
	};
	CreateDataCronClearOrderRequest();
	~CreateDataCronClearOrderRequest();
	long getTid() const;
	void setTid(long tid);
	Param getParam() const;
	void setParam(const Param &param);
	std::vector<long> getRelatedUserList() const;
	void setRelatedUserList(const std::vector<long> &relatedUserList);
	std::string getAttachmentKey() const;
	void setAttachmentKey(const std::string &attachmentKey);
	std::string getComment() const;
	void setComment(const std::string &comment);

private:
	long tid_;
	Param param_;
	std::vector<long> relatedUserList_;
	std::string attachmentKey_;
	std::string comment_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATEDATACRONCLEARORDERREQUEST_H_
