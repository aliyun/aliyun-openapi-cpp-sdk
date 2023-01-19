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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEVULNUMSTATISTICSRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEVULNUMSTATISTICSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeVulNumStatisticsResult : public ServiceResult
			{
			public:


				DescribeVulNumStatisticsResult();
				explicit DescribeVulNumStatisticsResult(const std::string &payload);
				~DescribeVulNumStatisticsResult();
				int getAppCnt()const;
				int getVulDealedTotalNum()const;
				int getVulLaterSum()const;
				int getImageVulTotalSum()const;
				int getEmgNum()const;
				int getAppNum()const;
				int getImageVulAsapSum()const;
				int getVulAsapSum()const;
				int getVulNntfSum()const;
				int getCveNum()const;
				int getScaNum()const;
				int getCmsNum()const;
				int getCmsDealedTotalNum()const;
				int getSysNum()const;
				int getImageVulLaterSum()const;
				int getImageVulNntfSum()const;

			protected:
				void parse(const std::string &payload);
			private:
				int appCnt_;
				int vulDealedTotalNum_;
				int vulLaterSum_;
				int imageVulTotalSum_;
				int emgNum_;
				int appNum_;
				int imageVulAsapSum_;
				int vulAsapSum_;
				int vulNntfSum_;
				int cveNum_;
				int scaNum_;
				int cmsNum_;
				int cmsDealedTotalNum_;
				int sysNum_;
				int imageVulLaterSum_;
				int imageVulNntfSum_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEVULNUMSTATISTICSRESULT_H_