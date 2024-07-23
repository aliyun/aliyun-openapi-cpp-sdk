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

#ifndef ALIBABACLOUD_MTS_MODEL_QUERYSNAPSHOTJOBLISTRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_QUERYSNAPSHOTJOBLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>

namespace AlibabaCloud
{
	namespace Mts
	{
		namespace Model
		{
			class ALIBABACLOUD_MTS_EXPORT QuerySnapshotJobListResult : public ServiceResult
			{
			public:
				struct SnapshotJob
				{
					struct SnapshotConfig
					{
						struct TileOut
						{
							std::string cellWidth;
							std::string color;
							std::string padding;
							std::string columns;
							std::string cellHeight;
							std::string cellSelStep;
							std::string margin;
							std::string isKeepCellPic;
							std::string lines;
						};
						struct OutputFile
						{
							std::string bucket;
							std::string object;
							std::string roleArn;
							std::string location;
						};
						struct TileOutputFile
						{
							std::string bucket;
							std::string object;
							std::string roleArn;
							std::string location;
						};
						OutputFile outputFile;
						TileOutputFile tileOutputFile;
						std::vector<std::string> timeArray;
						std::string frameType;
						std::string num;
						TileOut tileOut;
						std::string time;
						std::string height;
						std::string width;
						std::string interval;
					};
					struct MNSMessageResult
					{
						std::string errorCode;
						std::string errorMessage;
						std::string messageId;
					};
					struct Input
					{
						std::string bucket;
						std::string object;
						std::string roleArn;
						std::string location;
					};
					SnapshotConfig snapshotConfig;
					Input input;
					std::string message;
					std::string userData;
					std::string state;
					MNSMessageResult mNSMessageResult;
					std::string creationTime;
					std::string pipelineId;
					std::string count;
					std::string id;
					std::string code;
					std::string tileCount;
				};


				QuerySnapshotJobListResult();
				explicit QuerySnapshotJobListResult(const std::string &payload);
				~QuerySnapshotJobListResult();
				std::vector<SnapshotJob> getSnapshotJobList()const;
				std::vector<std::string> getNonExistSnapshotJobIds()const;
				std::string getNextPageToken()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<SnapshotJob> snapshotJobList_;
				std::vector<std::string> nonExistSnapshotJobIds_;
				std::string nextPageToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_QUERYSNAPSHOTJOBLISTRESULT_H_