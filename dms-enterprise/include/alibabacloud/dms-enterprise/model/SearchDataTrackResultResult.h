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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_SEARCHDATATRACKRESULTRESULT_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_SEARCHDATATRACKRESULTRESULT_H_

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
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT SearchDataTrackResultResult : public ServiceResult
			{
			public:
				struct TrackResult
				{
					struct Event
					{
						long eventLength;
						std::string eventTimestamp;
						std::string eventType;
						long eventId;
						std::string rollSQL;
						std::vector<std::string> dataBefore;
						std::vector<std::string> dataAfter;
					};
					struct TableInfo
					{
						struct Column
						{
							std::string columnName;
							int columnPosition;
							std::string columnType;
							bool fictive;
						};
						std::string tableName;
						std::string description;
						std::vector<TableInfo::Column> columns;
						std::string schemaName;
					};
					long totalCount;
					std::vector<Event> eventList;
					std::vector<TableInfo> tableInfoList;
				};


				SearchDataTrackResultResult();
				explicit SearchDataTrackResultResult(const std::string &payload);
				~SearchDataTrackResultResult();
				TrackResult getTrackResult()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				TrackResult trackResult_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_SEARCHDATATRACKRESULTRESULT_H_