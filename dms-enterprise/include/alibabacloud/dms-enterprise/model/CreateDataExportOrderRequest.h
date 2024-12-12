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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATEDATAEXPORTORDERREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATEDATAEXPORTORDERREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT CreateDataExportOrderRequest : public RpcServiceRequest {
public:
	struct PluginParam {
		std::string classify;
		long affectRows;
		long instanceId;
		struct Watermark {
			std::string dataWatermark;
			std::string fileWatermark;
			std::string string;
			std::vector<std::string> keys;
			std::string string;
			std::vector<std::string> watermarkTypes;
			std::string columnName;
		};
		Watermark watermark;
		long dbId;
		std::string exeSQL;
		std::string ignoreAffectRowsReason;
		bool logic;
		bool ignoreAffectRows;
	};
	CreateDataExportOrderRequest();
	~CreateDataExportOrderRequest();
	long getParentId() const;
	void setParentId(long parentId);
	long getTid() const;
	void setTid(long tid);
	std::vector<long> getRelatedUserList() const;
	void setRelatedUserList(const std::vector<long> &relatedUserList);
	PluginParam getPluginParam() const;
	void setPluginParam(const PluginParam &pluginParam);
	std::string getRealLoginUserUid() const;
	void setRealLoginUserUid(const std::string &realLoginUserUid);
	std::string getAttachmentKey() const;
	void setAttachmentKey(const std::string &attachmentKey);
	std::string getComment() const;
	void setComment(const std::string &comment);

private:
	long parentId_;
	long tid_;
	std::vector<long> relatedUserList_;
	PluginParam pluginParam_;
	std::string realLoginUserUid_;
	std::string attachmentKey_;
	std::string comment_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATEDATAEXPORTORDERREQUEST_H_
