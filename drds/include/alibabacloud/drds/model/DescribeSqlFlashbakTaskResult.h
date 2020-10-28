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

#ifndef ALIBABACLOUD_DRDS_MODEL_DESCRIBESQLFLASHBAKTASKRESULT_H_
#define ALIBABACLOUD_DRDS_MODEL_DESCRIBESQLFLASHBAKTASKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/drds/DrdsExport.h>

namespace AlibabaCloud
{
	namespace Drds
	{
		namespace Model
		{
			class ALIBABACLOUD_DRDS_EXPORT DescribeSqlFlashbakTaskResult : public ServiceResult
			{
			public:
				struct SqlFlashbackTask
				{
					long gmtModified;
					long searchEndTime;
					int recallStatus;
					std::string sqlPk;
					std::string tableName;
					int recallRestoreType;
					long gmtCreate;
					std::string instId;
					long searchStartTime;
					int recallType;
					std::string traceId;
					std::string dbName;
					std::string sqlType;
					long id;
					long expireTime;
					long sqlCounter;
					int recallProgress;
					std::string downloadUrl;
				};


				DescribeSqlFlashbakTaskResult();
				explicit DescribeSqlFlashbakTaskResult(const std::string &payload);
				~DescribeSqlFlashbakTaskResult();
				std::vector<SqlFlashbackTask> getSqlFlashbackTasks()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<SqlFlashbackTask> sqlFlashbackTasks_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_DESCRIBESQLFLASHBAKTASKRESULT_H_