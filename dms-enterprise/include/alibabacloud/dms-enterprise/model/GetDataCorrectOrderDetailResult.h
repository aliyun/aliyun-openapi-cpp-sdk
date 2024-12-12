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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETDATACORRECTORDERDETAILRESULT_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETDATACORRECTORDERDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>

namespace AlibabaCloud
{
	namespace Dms_enterprise
	{
		namespace Model
		{
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT GetDataCorrectOrderDetailResult : public ServiceResult
			{
			public:
				struct DataCorrectOrderDetail
				{
					struct OrderDetail
					{
						long estimateAffectRows;
						bool ignoreAffectRows;
						std::string classify;
						std::string exeSQL;
						std::string attachmentName;
						std::string ignoreAffectRowsReason;
						std::string sqlType;
						std::string rbSQLType;
						long actualAffectRows;
						std::string rbAttachmentName;
						std::string rbSQL;
					};
					struct ConfigDetail
					{
						struct ImportExtConfig
						{
							std::string importMode;
							bool csvFirstRowIsColumnDef;
							bool ignoreError;
							std::string insertType;
						};
						struct CronExtConfig
						{
							int currentClearTaskCount;
							int optimizeTableAfterEveryClearTimes;
						};
						CronExtConfig cronExtConfig;
						std::string cronFormat;
						std::string detailType;
						long currentTaskId;
						std::string cronLastCallStartTime;
						int duration;
						int cronCallTimes;
						std::string csvTableName;
						bool cron;
						ImportExtConfig importExtConfig;
						std::string cronStatus;
						std::string fileType;
						std::string cronNextCallTime;
						std::string fileEncoding;
					};
					struct TaskCheckDO
					{
						std::string userTip;
						std::string checkStep;
						std::string checkStatus;
					};
					struct Database
					{
						std::string searchName;
						int dbId;
						bool logic;
						std::string dbType;
						std::string envType;
					};
					OrderDetail orderDetail;
					std::string status;
					std::vector<Database> databaseList;
					ConfigDetail configDetail;
					std::vector<TaskCheckDO> preCheckDetail;
					std::string execMode;
				};


				GetDataCorrectOrderDetailResult();
				explicit GetDataCorrectOrderDetailResult(const std::string &payload);
				~GetDataCorrectOrderDetailResult();
				DataCorrectOrderDetail getDataCorrectOrderDetail()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				DataCorrectOrderDetail dataCorrectOrderDetail_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETDATACORRECTORDERDETAILRESULT_H_