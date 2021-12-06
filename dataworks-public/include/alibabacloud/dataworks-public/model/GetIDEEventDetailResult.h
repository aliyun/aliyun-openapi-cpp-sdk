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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETIDEEVENTDETAILRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETIDEEVENTDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetIDEEventDetailResult : public ServiceResult
			{
			public:
				struct EventDetail
				{
					struct FileExecutionCommand
					{
						std::string dataSourceName;
						long fileType;
						std::string content;
						long fileId;
					};
					struct DeletedFile
					{
						long parentFileId;
						std::string owner;
						long fileType;
						std::string dataSourceName;
						std::string content;
						long currentVersion;
						std::string fileName;
						std::string useType;
						long nodeId;
						long fileId;
						std::string folderId;
						long businessId;
					};
					struct CommittedFile
					{
						struct FilePropertyContent
						{
							long parentFileId;
							std::string owner;
							std::string dataSourceName;
							long currentVersion;
							std::string folderId;
							long businessId;
						};
						struct NodeConfiguration
						{
							struct Input
							{
								std::string input;
								std::string parseType;
							};
							struct Output
							{
								std::string output;
								std::string refTableName;
							};
							std::string cycleType;
							std::vector<Input> inputList;
							std::string dependentNodeIdList;
							long resourceGroupId;
							long autoRerunIntervalMillis;
							std::string dependentType;
							long autoRerunTimes;
							std::string rerunMode;
							std::string schedulerType;
							std::string paraValue;
							std::string cronExpress;
							std::vector<Output> outputList;
						};
						std::string committor;
						std::string comment;
						long fileType;
						std::string changeType;
						std::string content;
						FilePropertyContent filePropertyContent;
						std::string fileName;
						std::string useType;
						long nodeId;
						long fileId;
						NodeConfiguration nodeConfiguration;
					};
					struct TableModel
					{
						struct Column
						{
							std::string columnName;
							std::string comment;
							std::string columnType;
							bool isPartitionColumn;
						};
						long lifeCycle;
						std::string tableName;
						std::string comment;
						std::string dataSourceName;
						std::vector<Column> columns;
						std::string env;
						std::string location;
					};
					CommittedFile committedFile;
					DeletedFile deletedFile;
					FileExecutionCommand fileExecutionCommand;
					TableModel tableModel;
				};


				GetIDEEventDetailResult();
				explicit GetIDEEventDetailResult(const std::string &payload);
				~GetIDEEventDetailResult();
				EventDetail getEventDetail()const;

			protected:
				void parse(const std::string &payload);
			private:
				EventDetail eventDetail_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETIDEEVENTDETAILRESULT_H_