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

#ifndef ALIBABACLOUD_GREEN_MODEL_DESCRIBEOSSRESULTITEMSRESULT_H_
#define ALIBABACLOUD_GREEN_MODEL_DESCRIBEOSSRESULTITEMSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT DescribeOssResultItemsResult : public ServiceResult
			{
			public:
				struct ScanResult
				{
					struct FrameResult
					{
						std::string thumbnail;
						std::string url;
						int offset;
					};
					struct VoiceSegmentAntispamResult
					{
						int endTime;
						int startTime;
						std::string label;
						std::string text;
					};
					std::string taskId;
					std::string createTime;
					std::string requestTime;
					std::vector<ScanResult::VoiceSegmentAntispamResult> voiceSegmentAntispamResults;
					std::string thumbnail;
					std::string newUrl;
					std::string scanFinishedTime;
					std::string suggestion;
					std::string score;
					std::string dataId;
					std::vector<ScanResult::FrameResult> frameResults;
					std::string bucket;
					int handleStatus;
					std::string content;
					int resourceStatus;
					std::string object;
					long id;
				};


				DescribeOssResultItemsResult();
				explicit DescribeOssResultItemsResult(const std::string &payload);
				~DescribeOssResultItemsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::string getQueryId()const;
				std::vector<ScanResult> getScanResultList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::string queryId_;
				std::vector<ScanResult> scanResultList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_DESCRIBEOSSRESULTITEMSRESULT_H_