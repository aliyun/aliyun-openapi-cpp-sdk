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

#ifndef ALIBABACLOUD_AFS_MODEL_DESCRIBEAFSONECONFDATARESULT_H_
#define ALIBABACLOUD_AFS_MODEL_DESCRIBEAFSONECONFDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/afs/AfsExport.h>

namespace AlibabaCloud
{
	namespace Afs
	{
		namespace Model
		{
			class ALIBABACLOUD_AFS_EXPORT DescribeAfsOneConfDataResult : public ServiceResult
			{
			public:
				struct AfsNcOneConfData
				{
					long ncSigBlockCnt;
					int ncInitCnt;
					long ncSigCnt;
					long ncNoActionCnt;
					std::string tableDate;
					long ncVerifyCnt;
					long ncVerifyBlockCnt;
				};
				struct AfsIcOneConfData
				{
					long icNoActionCnt;
					long icBlockCnt;
					std::string tableDate;
					long icSecVerifyCnt;
					long icSigCnt;
					long icVerifyCnt;
					long icInitCnt;
				};
				struct AfsNvcOneConfData
				{
					long nvcNoActionCnt;
					long nvcInitCnt;
					std::string tableDate;
					long nvcVerifyCnt;
					long nvcBlockCnt;
					long nvcSecVerifyCnt;
				};


				DescribeAfsOneConfDataResult();
				explicit DescribeAfsOneConfDataResult(const std::string &payload);
				~DescribeAfsOneConfDataResult();
				std::vector<AfsIcOneConfData> getIcOneConfDatas()const;
				std::vector<AfsNcOneConfData> getNcOneConfDatas()const;
				std::vector<AfsNvcOneConfData> getNvcOneConfDatas()const;
				std::string getBizCode()const;
				bool getHasData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AfsIcOneConfData> icOneConfDatas_;
				std::vector<AfsNcOneConfData> ncOneConfDatas_;
				std::vector<AfsNvcOneConfData> nvcOneConfDatas_;
				std::string bizCode_;
				bool hasData_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AFS_MODEL_DESCRIBEAFSONECONFDATARESULT_H_