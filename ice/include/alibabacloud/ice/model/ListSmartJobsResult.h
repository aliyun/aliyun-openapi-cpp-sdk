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

#ifndef ALIBABACLOUD_ICE_MODEL_LISTSMARTJOBSRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_LISTSMARTJOBSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ice/ICEExport.h>

namespace AlibabaCloud
{
	namespace ICE
	{
		namespace Model
		{
			class ALIBABACLOUD_ICE_EXPORT ListSmartJobsResult : public ServiceResult
			{
			public:
				struct SmartJobListItem
				{
					struct InputConfig
					{
						struct InputMediaInfo
						{
							std::string fileUrl;
							std::string mediaId;
							std::string mediaType;
							std::string title;
							std::string coverUrl;
							std::string inputUrl;
							std::string fileSize;
						};
						struct InputOssFileInfo
						{
							std::string ossUrl;
							std::string title;
							std::string mediaType;
							std::string duration;
							std::string fileSize;
						};
						std::string keyword;
						InputMediaInfo inputMediaInfo;
						InputOssFileInfo inputOssFileInfo;
						std::string inputFile;
					};
					struct OutputConfig
					{
						std::string bucket;
						std::string object;
					};
					OutputConfig outputConfig;
					std::string description;
					std::string jobType;
					std::string modifiedTime;
					std::string userData;
					long userId;
					std::string createTime;
					std::string title;
					std::string editingConfig;
					std::string jobState;
					InputConfig inputConfig;
					std::string jobId;
				};


				ListSmartJobsResult();
				explicit ListSmartJobsResult(const std::string &payload);
				~ListSmartJobsResult();
				std::string getTotalCount()const;
				std::string getNextToken()const;
				std::string getMaxResults()const;
				std::vector<SmartJobListItem> getSmartJobList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				std::string nextToken_;
				std::string maxResults_;
				std::vector<SmartJobListItem> smartJobList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_LISTSMARTJOBSRESULT_H_