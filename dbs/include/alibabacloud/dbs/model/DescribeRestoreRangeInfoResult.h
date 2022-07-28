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

#ifndef ALIBABACLOUD_DBS_MODEL_DESCRIBERESTORERANGEINFORESULT_H_
#define ALIBABACLOUD_DBS_MODEL_DESCRIBERESTORERANGEINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dbs/DbsExport.h>

namespace AlibabaCloud
{
	namespace Dbs
	{
		namespace Model
		{
			class ALIBABACLOUD_DBS_EXPORT DescribeRestoreRangeInfoResult : public ServiceResult
			{
			public:
				struct DBSRecoverRange
				{
					struct FullBackupDetail
					{
						long endTime;
						long startTime;
						std::string backupSetId;
					};
					std::string rangeType;
					std::vector<DBSRecoverRange::FullBackupDetail> fullBackupList;
					std::string sourceEndpointInstanceID;
					long endTimestampForRestore;
					std::string sourceEndpointInstanceType;
					long beginTimestampForRestore;
				};


				DescribeRestoreRangeInfoResult();
				explicit DescribeRestoreRangeInfoResult(const std::string &payload);
				~DescribeRestoreRangeInfoResult();
				int getHttpStatusCode()const;
				std::vector<DBSRecoverRange> getItems()const;
				std::string getErrMessage()const;
				bool getSuccess()const;
				std::string getErrCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				int httpStatusCode_;
				std::vector<DBSRecoverRange> items_;
				std::string errMessage_;
				bool success_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBS_MODEL_DESCRIBERESTORERANGEINFORESULT_H_