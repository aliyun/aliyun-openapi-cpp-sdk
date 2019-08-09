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

#ifndef ALIBABACLOUD_MTS_MODEL_SUBMITSNAPSHOTJOBRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_SUBMITSNAPSHOTJOBRESULT_H_

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
			class ALIBABACLOUD_MTS_EXPORT SubmitSnapshotJobResult : public ServiceResult
			{
			public:
				struct SnapshotJob
				{
					struct Input
					{
						std::string bucket;
						std::string object;
						std::string roleArn;
						std::string location;
					};
					struct SnapshotConfig
					{
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
						struct TileOut
						{
							std::string cellWidth;
							std::string color;
							std::string columns;
							std::string padding;
							std::string cellHeight;
							std::string cellSelStep;
							std::string lines;
							std::string margin;
							std::string isKeepCellPic;
						};
						OutputFile outputFile;
						TileOutputFile tileOutputFile;
						std::string num;
						std::string frameType;
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
					SnapshotConfig snapshotConfig;
					Input input;
					std::string message;
					std::string userData;
					std::string state;
					MNSMessageResult mNSMessageResult;
					std::string creationTime;
					std::string pipelineId;
					std::string id;
					std::string count;
					std::string code;
					std::string tileCount;
				};


				SubmitSnapshotJobResult();
				explicit SubmitSnapshotJobResult(const std::string &payload);
				~SubmitSnapshotJobResult();
				SnapshotJob getSnapshotJob()const;

			protected:
				void parse(const std::string &payload);
			private:
				SnapshotJob snapshotJob_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_SUBMITSNAPSHOTJOBRESULT_H_