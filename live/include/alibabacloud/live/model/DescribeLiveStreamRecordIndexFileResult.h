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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMRECORDINDEXFILERESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMRECORDINDEXFILERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT DescribeLiveStreamRecordIndexFileResult : public ServiceResult
			{
			public:
				struct RecordIndexInfo
				{
					std::string endTime;
					std::string domainName;
					std::string createTime;
					std::string ossBucket;
					std::string startTime;
					float duration;
					std::string appName;
					std::string streamName;
					std::string format;
					std::string recordUrl;
					std::string ossEndpoint;
					std::string ossObject;
					int height;
					std::string recordId;
					int width;
				};


				DescribeLiveStreamRecordIndexFileResult();
				explicit DescribeLiveStreamRecordIndexFileResult(const std::string &payload);
				~DescribeLiveStreamRecordIndexFileResult();
				RecordIndexInfo getRecordIndexInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				RecordIndexInfo recordIndexInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMRECORDINDEXFILERESULT_H_