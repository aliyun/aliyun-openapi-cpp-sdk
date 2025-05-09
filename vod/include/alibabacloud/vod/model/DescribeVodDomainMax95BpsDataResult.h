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

#ifndef ALIBABACLOUD_VOD_MODEL_DESCRIBEVODDOMAINMAX95BPSDATARESULT_H_
#define ALIBABACLOUD_VOD_MODEL_DESCRIBEVODDOMAINMAX95BPSDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT DescribeVodDomainMax95BpsDataResult : public ServiceResult
			{
			public:
				struct Max95Detail
				{
					std::string area;
					std::string max95BpsPeakTime;
					float max95Bps;
					std::string timeStamp;
				};


				DescribeVodDomainMax95BpsDataResult();
				explicit DescribeVodDomainMax95BpsDataResult(const std::string &payload);
				~DescribeVodDomainMax95BpsDataResult();
				std::string getEndTime()const;
				std::string getDomainName()const;
				std::string getStartTime()const;
				std::string getDomesticMax95Bps()const;
				std::string getMax95Bps()const;
				std::vector<Max95Detail> getDetailData()const;
				std::string getOverseasMax95Bps()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string endTime_;
				std::string domainName_;
				std::string startTime_;
				std::string domesticMax95Bps_;
				std::string max95Bps_;
				std::vector<Max95Detail> detailData_;
				std::string overseasMax95Bps_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_DESCRIBEVODDOMAINMAX95BPSDATARESULT_H_