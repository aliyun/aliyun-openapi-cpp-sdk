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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINHTTPSDATARESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINHTTPSDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cdn/CdnExport.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT DescribeDomainHttpsDataResult : public ServiceResult
			{
			public:
				struct HttpsStatisticsInfo
				{
					float l1StHttpsQps;
					long l1HttpsOutQps;
					float l1StHttpsInnerBps;
					float l1DyHttpsAcc;
					std::string time;
					float l1DyHttpsOutQps;
					float l1StHttpsOutAcc;
					long l1HttpsOutTraf;
					float l1StHttpsBps;
					float l1HttpsOut_acc;
					float l1StHttpsAcc;
					float l1DyHttpsQps;
					float l1DyHttpsOutBps;
					float l1HttpsInnerBps;
					float l1StHttpsOutQps;
					float l1HttpsTacc;
					float l1HttpsBps;
					long l1HttpsInnerTraf;
					float l1StHttpsTraf;
					float l1StHttpsInnerAcc;
					long httpsSrcTraf;
					float l1DyHttpsBps;
					float l1DyHttpsInnerTraf;
					float l1HttpsInner_acc;
					float l1StHttpsOutTraf;
					float l1DyHttpsInnerQps;
					float l1DyHttpsTraf;
					long l1HttpsInnerQps;
					float httpsReqHitRate;
					float l1DyHttpsInnerBps;
					long l1HttpsQps;
					long httpsSrcBps;
					float httpsByteHitRate;
					float l1StHttpsOutBps;
					long l1HttpsTtraf;
					float l1StHttpsInnerQps;
					float l1HttpsHitRate;
					float l1HttpsOutBps;
					float l1DyHttpsInnerAcc;
					float l1DyHttpsOutTraf;
					float l1DyHttpsOutAcc;
					float l1StHttpsInnerTraf;
				};


				DescribeDomainHttpsDataResult();
				explicit DescribeDomainHttpsDataResult(const std::string &payload);
				~DescribeDomainHttpsDataResult();
				std::string getDataInterval()const;
				std::string getDomainNames()const;
				std::vector<HttpsStatisticsInfo> getHttpsStatisticsInfos()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string dataInterval_;
				std::string domainNames_;
				std::vector<HttpsStatisticsInfo> httpsStatisticsInfos_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINHTTPSDATARESULT_H_